import pygame

class Rock(pygame.sprite.Sprite):
    def __init__(self):
        super().__init__()


        self.image = pygame.image.load("assets/rocks.png").convert_alpha()
        #vazw diastaseis sthn eikona
        self.image = pygame.transform.scale(self.image, (80,100))
        #self.image = pygame.transform.rotate(self.image, 45)

        #edwthetoume to perigramma , kai to pairnoume to perigramma ths fwtografias pou orisame
        self.rect = self.image.get_rect()
        #thelw na valw ton vraxo sthn allh akrh, kai to kanw symfwna me tous aksones
        self.rect.x = 400
        self.rect.y = 30

   #den xreiazetai update o vraxos , den kounietai