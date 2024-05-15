class A:
    __value = 0
    def __init__(self,val):
        self.__value = val
    
    def display(self):
        print("The number is - ",self.__value)


obj = A(23)
obj.display()