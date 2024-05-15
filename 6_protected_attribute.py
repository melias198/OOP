# In python protected not make sense like cpp

class A:
    _age = 0
    
    def display(self):
        print(self._age)
    
    
class B(A):
    def __init__(self,age):
        self._age = age
        
    def display(self):
        print(self._age)
    

obj = A()

obj._age = 60

obj.display()