class node:
    def __init__ (self):
        self.key = None
        self.value = None
        self.children = {}

class trie:
    def __init__ (self):
        self.root = node()

    def insert(self,word,value):
        currentword = word
        currentnode = self.root
        while len(currentword)>0:
            if currentword[0] in currentnode.children:
                currentnode = currentnode.children[currentword[0]]
                currentword = currentword[1:]
            else:
                newnode = node()
                newnode.key = currentword[0]
                if len(currentword)==1:
                    newnode.value = value
                currentnode.children[currentword[0]] = newnode
                currentnode = newnode
                currentword = currentword[1:]

    def lookup(self,word):
        currentword = word
        currentnode = self.root
        while len(currentword)>0:
            if currentword[0] in currentnode.children:
                currentnode = currentnode.children[currentword[0]]
                currentword = currentword[1:]
            else:
                return "NOT IN TRIE"

            if currentnode.value == None:
                return "NONE"
            return currentnode.value

    def printourtrie(self):
        nodes = [self.root]
        while len(nodes)>0:
            for letter in nodes[0].children:
                nodes.append(nodes[0].children[letter])
            print (nodes.pop(0).key)


def makeourtrie(words):
    Trie = trie()
    for word,value in words.items():
        Trie.insert(word,value)
    return Trie
        
