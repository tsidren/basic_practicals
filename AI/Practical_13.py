from nltk.stem import WordNetLemmatizer


print("created by Shivanshu.")
print("roll: 2100971520048")
print("program no:13, implement Lemmatization using NLTK.\n")

lemmatizer = WordNetLemmatizer()
print("rocks :", lemmatizer.lemmatize("rocks"))
print("corpora :", lemmatizer.lemmatize("corpora"))
print("better :", lemmatizer.lemmatize("better", pos ="a"))
