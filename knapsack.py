# Knapsack problem
# Bottom Up Approach

class Item:
    def __init__(self, name: str, value: int, weight: int):
        self.name = name
        self.value = value
        self.weight = weight

# return the maximum value of selected items within capacity
# input items : choices
# input capacity : knapsack capacity


def zero_one_knapshack(items, capacity):
    # dp table
    # dp [i][j] stores max value
    dp = []

    total_items = len(items)
    for i in range(total_items+1):
        row = []
        for j in range(capacity+1):
            row.append(0)
        dp.append(row)

    for i in range(1, total_items+1):
        for j in range(capacity+1):
            index = i-1
            if(j < items[index].weight):
                # if current capacity < current item weight
                # the can not pick current item
                # optimal value same as the one without current item
                dp[i][j] = dp[i-1][j]
            else:
                # pick current item
                value_with_current_item = dp[i-1][j -
                                                  items[index].weight] + items[index].value
                # leave (do not pick) current item
                value_without_current_item = dp[i-1][j]
                # choose the higher value to store in dp table
                dp[i][j] = max(value_without_current_item,
                               value_with_current_item)

    return dp[total_items][capacity]

# initialize item list and capacity


items = [Item('Water', 3, 2), Item('Diet Water', 1, 1),
         Item('Orange Juice', 4, 2), Item('Gatorade', 5, 4)]
capacity = 5

# call knapsack function
max_value = zero_one_knapshack(items, capacity)
print(max_value)
