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
        self.image = pygame.transform.scale(self.image, (80,100))
                
        #kathe fora pou vazw ena eikonidio sthn pygame, ftiaxnei ena perigramma kai to xrhsimopoiei gia tis sugkrouseis.
        #to rect einai auto to perigramma , kai mas dinei to x kai y
        #to perigramma , to pairnei apo thn eikona pou tou vazoume (edw einai to sport-car).Einai aparaithto gia thn sugkroush twn antikeimenwn , na upologizei to perigramma diastaseis klp.
        #Apo edw kai pera otan ftiaxnw ena antikeimeno , tha orizw autes tis dyo grammaes, self.image , self.rect.
        self.rect = self.image.get_rect()
        self.speed = 5


    #Override , uperkalupsh ths sunarthsh update().Auth thn klhronomei apo thn classh Sprite.
    def update(self):
        #h update ekteleitai se kathe frame
        #sto autokinhto pou exoume , dialegw ton aksona x , (giati kounietai orizontia) to kounaw + 5 se kathe frame
        #vazoume rect, giati gia na kounhsoume to antikeiemno , kouname to perigramma kai kounietai olo to object
        self.rect.x += self.speed
