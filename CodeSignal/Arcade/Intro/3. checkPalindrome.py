def solution(inputString):
    strlen = len(inputString)
    i = 0
    j = strlen - 1
    
    if(strlen % 2 != 0):
        while(i != j):
            if inputString[i] != inputString[j]:
                return False
            i += 1
            j -= 1
    else:
        if(strlen == 2):
            if inputString[i] != inputString[j]:
                return False
        else:   
            i = int(strlen/2 - 1)
            j = int(strlen/2)
            while(i != 0):
                if inputString[i] != inputString[j]:
                    return False
                i -= 1
                j += 1
       
    return True
