from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize


print("created by Shivanshu.")
print("roll: 2100971520048")
print("program no:10, remove stop words for a given passage.\n")

stopwords = set(stopwords.words("english"))
sample_sentence = '''Hello!! Everyone I am shivanshu. I am a student of Computer 
                    Science and Engineering (Artificial Intelligence) in Galgotias College of Engineering and 
                    Technology.'''
a = word_tokenize(sample_sentence)
for word in a:
    if word not in stopwords:
        print(word, end=",")
