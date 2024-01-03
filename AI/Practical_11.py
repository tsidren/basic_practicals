from nltk.stem import PorterStemmer
from nltk.tokenize import word_tokenize


print("created by Shivanshu.")
print("roll: 2100971520048")
print("program no:11, stemming for a given sentences using NLTK.\n")

port = PorterStemmer()
sample="Hello Everyone I am Shivanshu from Galgotias College of Engineering and Technology."
for word in word_tokenize(sample):
    print(port.stem(word), end=",")
