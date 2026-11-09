import pygame #eisagoume thn vivliothikh pygame .Xwris auto den exoume pygame

import random 

import sys #Mia vivliothikh gia to systhma , einai gia na kleisei olo mas to programma ,sys.exit()



# Αρχικοποίηση του pygame
#Den mporw na xrhsimopoihsw thn pygame xwris na arxikopoihsw thn vivliothikh.Epeidh exei metavlhtes klp, me auth thn entolh dinoume arxikes times.
pygame.init()



# Διαστάσεις οθόνης

WIDTH, HEIGHT = 800, 600 #Ftiaxnoume tis diastaseis sto parathuraki sto opoio that einai to game

#me pygame . , exoume access sta pragmata ths pygame
screen = pygame.display.set_mode((WIDTH, HEIGHT)) #Edw vazoume tis diastaseis pou ftiaksame pio prin sto parathuro.(To display einai to parathuro)

#edw dinei titlo sto parathuraki (To display einai to parathrup)
pygame.display.set_caption("Βασικό Πρόγραμμα Pygame")



# Χρώματα

WHITE = (255, 255, 255)

BLACK = (0, 0, 0)



# Ρολόι για έλεγχο του ρυθμού καρέ

clock = pygame.time.Clock()



# Κύριος βρόχος
#Ola auta aforoun ena frame . To FPS einai poso grhgora tha allazoun ta frames
running = True  

while running:#Etsi ginetai atermwn vroxos giati to running einai panta true

    for event in pygame.event.get(): #psaxnei ola ta events , plhktra

        if event.type == pygame.QUIT: #An exeis pathsei to X sto parathuraki,tote kopse ton atermwn vroxo kai phgaine sthn pygame.(quit)

            running = False


    #Exoume orisei sthn screen to patarhutaki
    #Katharizei thn parathuro kai to vafei gkri

    #Auto shmainei alliws auto: grey = (127,127,127)
    #screen.fill(grey)
    #An den valw thn fill , tha mpoutzourwnei to ena kare meta to allo
    screen.fill((127, 127, 127))  # σκούρο φόντο


    #Zwgrafizoume meta thn fill
    #Zwgrafizoume twra ena orthogwnio,rectangle
    blue = (0 , 0 , 255)
                    #surface, color,x,y,width,height
    pygame.draw.rect(screen , blue,(50,100,300,100))

    #kyklos
    pygame.draw.circle(screen,(0,255,0),(250,250),50,3)

    #An sxediasoume parapanw apo ena sxhmata, fainetai to deyero pio mprosta apo to allo giati sxediazetai teleutaio.

    #grammh
    pygame.draw.line(screen,(255,255,0), (0,0),(300,300),5)

    #ellipsh
    pygame.draw.ellipse(screen,(0,255,0),(100,100,200,120),3)

    # Ενημέρωση της οθόνης
    #Sthn pragmatikothta uparxoun 2 frames,diplo buffer. Thn wra pou vlepw egw ena frame sthn othonh , apo pisw einai to allo pou zwgrafizei kai sto etoimazei
    #Apotrepei to tremopegma , to flickering me to ena einai 2 frames mprosta kai pisw.
    pygame.display.flip()



    # Περιορισμός του ρυθμού καρέ
    #Edw vazoume ta FPS.Edw exoume valei FPS:5.
    clock.tick(5)



# Τερματισμός του pygame

pygame.quit()

sys.exit()
