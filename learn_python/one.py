for i in range(1, 11):
    for j in range(1, 11):
        print("%d * %d = %d\t" %(i, j, i*j))
        if (j == i):
            print("\n")