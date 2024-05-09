import re

class Markov:
    def _init_(self, text):
        self.text = text
        self.words = re.split(' ', text.lower())
        self.ngram = len(self.words)
        self.frequency = {}
    
    def build_frequency_dict(self):
        for i in range(self.ngram - 3):
            context = tuple(self.words[i:i+3])
            if context in self.frequency:
                self.frequency[context] += 1
            else:
                self.frequency[context] = 1
    
    def predicted_word(self, context):
        context = tuple(context)
        if context not in self.frequency:
            return None
        else:
            freq = self.frequency[context]
            words = []
            for i in range(self.ngram - 3):
                if self.words[i:i+3] == context:
                    words.append(self.words[i+3])
            return sorted(words, key=lambda word: freq.get(word, 0), reverse=True)[0]

def main():
  # sample text
  text = "Python is a great language to implement the Markov algorithm"
  markov = Markov(text)
  markov.build_frequency_dict()
  
  context = "python is a great"
  predicted = markov.predicted_word(context.split())
  print(context, "->", predicted)
  
if _name_ == '_main_':
  main()
