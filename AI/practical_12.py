import nltk


print("created by Shivanshu.")
print("roll: 2100971520048")
print("program no:12, Part of speech tagging.\n")

text1 = '''The hard work is the gateway to success. It has no parallel in human life. It is a 
common misconception that when you are lucky you do not need work hard. 
Whereas, the things are otherwise. The hard work beats the talent. It always pays and never 
goes unrewarded or in vain.'''
print(text1)
words1=nltk.word_tokenize(text1)
print(words1)
print("Words on POS tagging are as follows:")
print(nltk.pos_tag(words1))
