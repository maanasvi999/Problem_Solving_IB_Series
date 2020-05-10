class Solution:
    # @param A : integer
    # @return a list of strings
    def fizzBuzz(self, A):
        lst=[]
        for i in range(A):
            if(i%3==0 and i%5==0):
                lst.append("FizzBuzz")
            elif(i%3==0):
                lst.append("Fizz")
            elif(i%5==0):
                lst.append("Buzz")
            else:
                lst.append(str(i))
        return lst         
