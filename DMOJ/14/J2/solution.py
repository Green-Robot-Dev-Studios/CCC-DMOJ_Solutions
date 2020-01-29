number_of_votes = input()
vote = input()

votes = list(vote)
a = votes.count("A")
b = votes.count("B")

if a > b :
    print("A")
elif b > a :
    print("B")
else :
    print("Tie")
