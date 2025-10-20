import random
from re import I 

print(random.randint(1, 100))
print(random.randint(1, 100))
while True:
    answer = input("Guess the number: ")
    if answer == "exit":
        break
    elif int(answer) == random.randint(1, 100):
        print("You win!")
    else:
        print("You lose!")

def guess_number():
    number = random.randint(1, 100)
    while True:
        answer = input("Guess the number: ")
        if answer == "exit":
            break
        elif int(answer) == number:
            print("You win!")
            break
        else:
            print("You lose!")
            
if __name__ == "__main__":
    guess_number()
