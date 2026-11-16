import pygame

#ama thelame apla na thn klhronomhsoume akrivws opws einai kai na mhn allaksouem kati ,tha vazame thn entolh pass
#pass

#H sprite einai etoimh clash ths pygame m opote me to na kanoume import pygame , mporoume
#na thn klhronomhsoume kateutheian me auto ton torpo

class Car(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()

        #Vazw eikonidio gia to autokinhto
        #self einai san to this .Ara einai san na leei this image , tous sprite pou tha ftiaskoume
        #idianika theloume eikonidia png gia na mhn exei background
        #h convert_alpha() vgazei to background
        #Sthn eikona den vazoume mono to onoma , vazoume to path pou einai mesa sta assets, dhladh assets/thn eikona pou theloume.png 
        self.image = pygame.image.load("assets/sport-car.png").convert_alpha()