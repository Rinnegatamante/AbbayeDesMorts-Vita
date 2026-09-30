TARGET		:= AbbayeDesMorts
SOURCES		:= src
			
INCLUDES	:= include

LIBS =   -lSceLibKernel_stub -lSceAppMgr_stub -lm -lSceNet_stub -lSceNetCtl_stub \
    -lSceAppUtil_stub -lScePower_stub -lmad -lSDL_mixer -lSDL_ttf -lvorbisfile -lvorbis -logg \
	-lSDL -lSDL_image -lSceAudio_stub -lc -lvita2d -lScePvf_stub -lScePgf_stub -ljpeg -lpng16 \
	-lz -lSceDisplay_stub -lfreetype -lSceGxm_stub -lSceCtrl_stub -lSceSysmodule_stub \
	-lSceCommonDialog_stub -lSceHid_stub -lSceTouch_stub \
	-lmikmod -lFLAC -lwebp -lsharpyuv -lbz2 -lpthread

CFILES   := $(foreach dir,$(SOURCES), $(wildcard $(dir)/*.c))
CPPFILES   := $(foreach dir,$(SOURCES), $(wildcard $(dir)/*.cpp))
BINFILES := $(foreach dir,$(DATA), $(wildcard $(dir)/*.bin))
OBJS     := $(addsuffix .o,$(BINFILES)) $(CFILES:.c=.o) $(CPPFILES:.cpp=.o) 

PREFIX  = arm-vita-eabi
CC      = $(PREFIX)-gcc
CXX      = $(PREFIX)-g++
CFLAGS  = -fno-lto -g -Wl,-q -O3 -D_PSP2
CXXFLAGS  = $(CFLAGS) -fno-exceptions -std=gnu++11 -fpermissive
ASFLAGS = $(CFLAGS)

all: $(TARGET).vpk

$(TARGET).vpk: $(TARGET).velf
	vita-mksfoex -s TITLE_ID=ABBAYEDMO "Abbaye Des Morts" param.sfo
	vita-pack-vpk -s param.sfo -b eboot.bin \
		-a sce_sys/icon0.png=sce_sys/icon0.png \
		-a sce_sys/livearea/contents/bg.png=sce_sys/livearea/contents/bg.png \
		-a sce_sys/livearea/contents/startup.png=sce_sys/livearea/contents/startup.png \
		-a sce_sys/livearea/contents/template.xml=sce_sys/livearea/contents/template.xml $@

%.velf: %.elf
	cp $< $<.unstripped.elf
	$(PREFIX)-strip -g $<
	vita-elf-create $< $@
	vita-make-fself -s $@ eboot.bin

$(TARGET).elf: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -Wl,--start-group $(LIBS) -Wl,--end-group -o $@

clean:
	@rm -rf $(TARGET).velf $(TARGET).elf $(OBJS)
