import nltk
from nltk.sentiment import SentimentIntensityAnalyzer
nltk.download("vader_lexicon")

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
