from collections import deque


class Node:
    def __init__(self, data, next, prev):
        self.data = data
        self.next = next
        self.prev = prev


class LRUCache:
    def __init__(self, cap):
        self.hm = {}
        self.head = None
        self.last = None
        self.cap = cap

    # getOperation affected by singly linkedlsit

    def add(self, key, value):
        ## to add or not to add

        if self.size == self.cap:
            self.evict()
        nn = Node(value, self.head, None)
        if self.head:
            self.head.prev=nn
        
        self.hm[key] = nn
        self.head = nn
        self.size += 1

    def evict(self):
        self.last = self.last.prev
        # garbage
        self.last.next = None

    def get(self, key):
        gn = self.hm[key]
        if gn:
            pn = gn.prev
            nxn = gn.next
            pn.next = nxn
            nxn.prev=pn
            gn.next = head
            head.prev = gn
            head = gn
            return gn.data
        else:
            return None

    def print(self):
        print(self.hm)  # to print keys
        curr = self.head
        while curr:
            print(curr.data)
            curr = curr.next


if __name__ == "__main__":
    print("invoked")
    # lru = LRUCache(3)
    # lru.print()
    # lru.add(1, 1)
    # lru.add(2, 2)
    # lru.add(3, 3)
    # lru.add(4, 4)

    # lru.print()
    # # 4->3->2
    # print(lru.get(1))
    # print(lru.get(3))
    # # 3,4,2

    # lru.print()
    # lru.add(5)
    # # 5,3,4
    # lru.print()

    ##exploring map apis
    mym={"1":2,5:"1"}
    mym[6]=6
    # print(mym[7])
    print(mym.get(8))
    mym[6]=None
    print(mym[6])
    print(mym[10])
    deque([])

