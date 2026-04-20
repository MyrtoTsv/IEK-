import random  

x = random.randint(1,10) #apo 1 ews 10 dinei tuxaio arithmo int
print(x)

x = random.random() #dinei tuxaio dekadiko apo 0 ews 1
print(x)

x = random.uniform(5,10) #me to uniform mporoume na dwsoume emeis to euros pou theloume , twra einai 5.0 ews 10.0
print(x)

items=["apple","banana","orange"] #Tuxaia epilogh apo lista-pinaka
print(random.choice(items))

nums = [1,2,3,4,5] #Tuxaio anakatema stoixeiwn listas
random.shuffle(nums)
print(nums)

#Dhmiourgia lista-pinaka me 5 tuxaious arithmous
nums=[random.randint(1,100) for _ in range(5)] #for _ in range(5) shmainei oti apo 0 apo 5 kanonika apla vazoume _ giati den xreiazomaste metavlhth
print(nums)

print("-----------------------------------------------------------------------------------------------------------------------------------")
#Mporoume apo enan pinaka na vgaloume ena mikrotero ypopinaka.Anti na ton exoume oloklhro , na paroume apla enan pinaka, ena tmhma tou
A = [11,8,80,9,7,63]

B = A[1:5:1] #Dhmiourgia upopinaka , shmainei A[start:end:step] . O arxikos den pathainei kati

B = A[0:5:2] #Tha einai [11,80,7]

#Mporei na paei kai apapoda
B = A[5:-1:-1] #H A[::-1] to dinei reversed
