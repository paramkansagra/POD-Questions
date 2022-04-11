l = list(sorted([int(input()), int(input()), int(input())]))

print(min(l[0]-(l[1]*l[2]), l[0]-l[1]-l[2]))