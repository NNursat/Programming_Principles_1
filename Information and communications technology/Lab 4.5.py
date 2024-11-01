# sandwich
breads = ["white", "whole wheat", "rye"]
meats = ["turkey", "ham", "chicken"]
vegetables = ["lettuce", "tomato", "cucumber"]
sauces = ["mayo", "mustard", "ketchup"]

for bread in breads:
    for meat in meats:
        for vegetable in vegetables:
            for sauce in sauces:
                print("Sandwich: ", bread ," bread", meat, vegetable, "with ", sauce)
