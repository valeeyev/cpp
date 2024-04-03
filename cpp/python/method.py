class MyMethod:
    @staticmethod
    def toLower(word):
        lower_word = ""
        for char in word:
            if char.isupper():
                lower_word += char.lower()
            else:
                lower_word += char
        return lower_word


word = "Hello, World!"
lowercased_word = MyMethod.toLower(word)
print(lowercased_word)
