# ========================= PROBLEM 1 =========================
# Given the root to a binary tree, implement serialize(root), which serializes the tree into a string,
# and deserialize(s), which deserializes the string back into the tree

# ========================= SOLUTION =========================

# 1. Get the total product multiplicating all values from array -> n runs
# 2. Iterates through array executing totalProduct / array[i] -> n runs
# Total Complexity O(n + n) = O(n)

class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def serialize(node):
    print('test')

def deserialize(node_string):
    print('test')


node = Node('root', Node('left', Node('left.left')), Node('right'))

assert deserialize(serialize(node)).left.left.val == 'left.left'
