import pygame 

import random 

import sys 

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



# Κύριος βρόχος

running = True  

while running:

    for event in pygame.event.get(): 

        if event.type == pygame.QUIT: 
            running = False


    screen.fill((0, 0, 0))  # σκούρο φόντο

    #Epeidh exoume dhlwsei ta xrwmata mesa sthn while , ta xrwmata den einai "stathera" optoe tha fernei sunexeia kainouria xrwmaata stous kuklous
    #Ama thelw na einai stathera , tha prepei na ta valw prin apo thn while ta rColor1,2,3.

    #theloume na ftiaksoume tuxaia xrwmata , kai epiedh gia na ftiaksoume ena xrwma , theloume to R,G,B
    #epeidh oi arithmoi gia na ftiakseis ena xrwma , theloume tous arithmous apo to 0 ews to 255 , kaloume thn random treis fores sta tria RGB me times apo 0,255
    rColor1 = (random.randint(0,255),random.randint(0,255),random.randint(0,255))
    rColor2 = (random.randint(0,255),random.randint(0,255),random.randint(0,255))
    rColor3 = (random.randint(0,255),random.randint(0,255),random.randint(0,255))

    #Ama theloume na valoume kai random theseis , tha doume panw sto screen pou exoume orisei to WIDTH kai to HEIGHT 
    #vazoume to x,y me random , kai ta vazoume san suntetagmenes
    x = random.randint(0,WIDTH)
    y = random.randint(0, HEIGHT)
    #kyklos 1
    pygame.draw.circle(screen,rColor1,(x,y) , 40)
     #kyklos 2
    pygame.draw.circle(screen,rColor2,(x,y) , 40)
     #kyklos 3
    pygame.draw.circle(screen,rColor3,(x,y) , 40)

    #me auto vlepoume pou einai to pontiki , twra tha akolouthei to x kai y tou pontikiou se auto pou tha to valoume
    #tou vazoume stathero xrwma
    grey = (127, 127, 127)
    mouse_x, mouse_y = pygame.mouse.get_pos()
    #4 kuklos pou tha ton akolouthoume , me ta x kai y tou pontikiou mas , twra tha mas akolouthei
    pygame.draw.circle(screen,grey,(mouse_x , mouse_y),40)
 
    pygame.display.flip()



    # Περιορισμός του ρυθμού καρέ
    
    clock.tick(5)



# Τερματισμός του pygame

pygame.quit()

sys.exit()

