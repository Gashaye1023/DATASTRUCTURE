class linearsearch:
    def __init__(self,arr):
        self.arr=arr
    def search(self,target):
        for i in range(len(self.arr)):
            if self.arr[i]==target:
                return i
        return -1
my_list=[1,3,4,6,5,6,7,8]
searcher=linearsearch(my_list)
print(searcher.search(3))