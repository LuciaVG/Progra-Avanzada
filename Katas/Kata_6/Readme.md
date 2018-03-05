Problem:

You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a dictionary ↴ , where the keys are words and the values are the number of times the words occurred.

Think about capitalized words. For example, look at these sentences:

 'After beating the eggs, Dana read the next step:'
'Add milk and eggs, then add flour and sugar.'

What do we want to do with "After", "Dana", and "add"? In this example, your final dictionary should include one "Add" or "add" with a value of 222. Make reasonable (not necessarily perfect) decisions about cases like "After" and "Dana".

Assume the input will only contain words and standard punctuation.

Breakdown:

For this problem I need to build a hash table, I'm going to use the one that we programmed in class.
Then I read the file with the words and if the value of the char is between the range of the uppercase letters sum 75 and save it like that.
Save a sequence of chars until you find a space and save it in the hash table with 1 as the value. if it's already there just sum one to the value and that's all.
