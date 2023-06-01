# Thoughts on the Enum Challenge

The challenge was pretty straight forward. I did struggle figuring out how to put everything into a single printf() statement and eventually just made 3 separate prtinf() statements because it was only displaying the first one. I was giving a to many arguments error. I would think there would be a way to display all the variables using a single print statement but I'm not sure what I was doing wrong. Need to come back and double check that.

I'm also not really sure what you would want to use this for. Enum to me is almost like either a list or dictionary in python but instead of giving you the value back it gives the index of the array. I know that they are completely different but that's what my mind see's when I try to think of reason's to use this I can't really find one. It's for constant integrals so the example of months {jan, feb, march,..., dec} makes sense, but of the top of my head right now can't think of a reason they will be useful. I'm sure as I go through this it will become more apparent. 

Mentioned that you can restrict what is valid for a variable, and provides some form of validation. So wondering if this can be used for input validation but we'll see. 

Basic syntax

enum <variableClass> {object1,object2,object3,...};

enum <variableClass> <variableName> = <object>;