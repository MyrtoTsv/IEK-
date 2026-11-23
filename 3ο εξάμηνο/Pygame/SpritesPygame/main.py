#Antikeimena sthn pygame
#To sprite ,einai ola auta ta eikonidia twn antikeimenwn. Sthn sprite omws.  den einai mono to eikonidio . kai oi plhrofories , pou vrisketai , me thn taxuthta ,thn thesh etc.
#To sprite , periexei to eikonidio , h thesh tou , taxuthta , diastaseis kai oti allo theloume na tou valoume emeis,
#Einai etoimh klash h sprite , pou thn klhronomoume.

#Sugkroush anntikeimenwn , einai otan opoiadhpote antikeimena , kanoun interact , na erthoun se epafh. Px na perpathsei to anthrwpaki se mia petra,
#px otan purovoleis , h sfaira na paei panw sto allo anthrwpaki ,otan to anthrwpaki akoumphsei ena nomisma.

#Apo edw kai pera , kathe paixnidi pou tha ftiaxnoume , tha to vazoume se ksexwisto fakelaki

import pygame
import random
import sys
#Gia na na anagnwrisei ta antikeiemna car etc , kanoume import to arxeio car.py alla xwris to .py
#import car
#Auto to import omws einai kalutero gt theloume apo auto to arxeio mono thn Car twra
from car import Car
from rock import Rock

# Αρχικοποίηση του pygame
pygame.init()

# Διαστάσεις οθόνης
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Βασικό Πρόγραμμα Pygame")

# Χρώματα
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)

# Ρολόι για έλεγχο του ρυθμού καρέ
clock = pygame.time.Clock()

#To group idanika ftiaxnetai prin apo kathe antikeimeno
#Dhmiourgia tou Group
#Twra ftiaxnei ena megalo group me ta ola sprites
all_sprites = pygame.sprite.Group()

#Prin thn while kanw arxkiopoihsh , vazw ta stoixeia tou paixnidiou
#Dhmiourgia antikeimenwn
#Kathe fora pou tha ftiaxnw ena antikeimeno , tha to prosthethw sto sprite group
c1 = Car()
all_sprites.add(c1) #Vazw to autokinhto sto Group

r1 = Rock()
all_sprites.add(r1)

# Κύριος βρόχος
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False


    #thn update den theloume na thn mplekoume sthn draw  
    #Enhmerwse ola ta antikeimena
    #H seira einai na vazoume thn update prin apo to draw.
    all_sprites.update()

    #elegxw an to autokinhto akoumphse ston vraxo 
    if pygame.sprite.collide_rect(c1,r1):
        #to svhnw
        c1.kill()


    screen.fill((20, 20, 20))  # σκούρο φόντο

    #Anti na kathomai na zwgrafizw gia kathe frame ola ta sprites, exoume twra ena group
    #Zwgrafizei sthn othonh ola ta sprite tou group
    all_sprites.draw(screen)
    
    # Ενημέρωση της οθόνης
    pygame.display.flip()

    # Περιορισμός του ρυθμού καρέ
    clock.tick(25)

# Τερματισμός του pygame
pygame.quit()
sys.exit()
