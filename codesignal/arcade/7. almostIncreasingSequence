def solution(sequence):
    
    if len(sequence) <= 2:
        return True
    
    s = [el for el in sequence]
    
    del s[0]
    if checkSequence(s) == True:
        return True
    
    s = [el for el in sequence]
    
    del s[-1]
    if checkSequence(s) == True:
        return True
    
    
    counter = 0
    i = 1
    s = [el for el in sequence]

    while(True):
        
        if i == len(s) - 1:
            break
        try:
            prev = s[i-1]
            curr = s[i]
            nxt = s[i+1]
        except:
            
            break
        
        else: 
            
            if prev >= curr:
                del s[i-1]
                counter += 1
            
            elif prev == nxt:
                del s[i+1]
                counter += 1
                    
            elif curr >= nxt and curr >= prev:
                del s[i]
                counter += 1
            
            i += 1
         
    # print(s)
    
    if counter > 1:
        return False
    
    return checkSequence(s)

def checkSequence(s):
    
    for i in range(1, len(s)):
            
        prev = s[i-1]
        curr = s[i]
            
        if prev >= curr:
            return False            
        
    return True
