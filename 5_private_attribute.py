class A:
    __value = 0 #Private Attribute
    name = '' #Public Attribute
    
    def display(self):
        print("This is class")
        
    # def setter(self,val):
    #     self.__value = val
    
    @property   
    def get_value(self):
        return self.__value
    
    @get_value.setter
    def set_value(self,val):
        self.__value = val
        
    
obj = A()

obj.display()

# obj.value = 100
# print(obj._A__value)
obj.name = 'Object'
# obj.setter(40)

# print(obj.getter())
# print(obj.value)

obj.set_value = 89

print(obj.name)
print(obj.get_value)
