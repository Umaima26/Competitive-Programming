def solution(inputArray):
    max = float('-inf')
    for i in range(len(inputArray) - 1):
        product = inputArray[i]*inputArray[i+1]
        if(product > max):
            max = product
            
    return max
