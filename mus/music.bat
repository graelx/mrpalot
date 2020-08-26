@set nomMus=mrpalot

@echo Creando el fichero music.h
@..\utils\asm2z88dk %nomMus%.asm ..\dev\music.h mk1

@pause