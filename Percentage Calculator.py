def calculate_grade(percentage):
    if percentage >= 90:
        return "A"
    elif percentage >= 75:
        return "B"
    elif percentage >= 60:
        return "C"
    else:
        return "D"

students = []

while True:
    print("\n1.Add Student\n2.View Report\n3.Exit")
    choice = input("Choose: ")

    if choice == "1":
        name = input("Student name: ")
        marks = []
        for i in range(3):
            marks.append(int(input(f"Enter marks for subject {i+1}: ")))

        total = sum(marks)
        percent = total / 3
        grade = calculate_grade(percent)

        students.append((name, marks, percent, grade))

    elif choice == "2":
        for s in students:
            print(f"Name: {s[0]}, Marks: {s[1]}, %: {s[2]:.2f}, Grade: {s[3]}")

    elif choice == "3":
        break
