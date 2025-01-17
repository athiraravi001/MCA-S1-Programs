def len_word(words):
    lonest_word=" "
    max_length=0
    for word in words:
        if len(word)>max_length :
            longest_word=word
            max_length=len(word)
    return longest_word,max_length
words=["Programming","Python","Technology","Innovation"]
longest_word,length=len_word(words)
print("Longest word : ",longest_word)
print("Length : ",length)