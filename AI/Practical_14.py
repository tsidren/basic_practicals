import nltk
from nltk.sentiment import SentimentIntensityAnalyzer


print("created by Shivanshu.")
print("roll: 2100971520048")
print("program no:14, text classification for the given sentences using NLTK.\n")

# nltk.download("vader_lexicon")

sia = SentimentIntensityAnalyzer()

new_sentence = input("Enter a sentence for sentiment analysis: ")

scores = sia.polarity_scores(new_sentence)

if scores['compound'] >= 0.05:
    sentiment = 'positive'
elif scores['compound'] <= -0.05:
    sentiment = 'negative'
else:
    sentiment = 'neutral'

print(f"Sentiment: {sentiment}")
print(f"Compound Score: {scores['compound']}")
