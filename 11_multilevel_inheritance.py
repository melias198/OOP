class A:
    def __init__(self):
        print("This is A class")
        super().__init__()
        
class B(A):
    def __init__(self):
        print("This is B class")
        super().__init__()
        
class C(B):
    def __init__(self):
        print("This is C class")
        super().__init__()
      
        
obj = C()


print(C.__mro__)
