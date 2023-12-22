def calculate_area(shape, size):
    if shape == 'S':
        area = size ** 2
        print(f"Area of Square = {area}")
    elif shape == 'C':
        import math
        area = math.pi * (size ** 2)
        print(f"Area of Circle = {area:.2f}")
calculate_area('S', 4)
calculate_area('C', 4)