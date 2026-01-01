students = []
attendance = []

def add_students():
    n = int(input("How many students? "))
    for i in range(n):
        name = input(f"Enter name of student {i+1}: ")
        students.append(name)

def mark_attendance():
    attendance.clear()
    print("\nMark Attendance (P/A)")
    for s in students:
        status = input(f"{s}: ").upper()
        if status not in ["P", "A"]:
            status = "A"
        attendance.append((s, status))

def view_attendance():
    print("\nAttendance Report")
    present = 0
    absent = 0

    for s, status in attendance:
        if status == "P":
            present += 1
            print(s, ": Present")
        else:
            absent += 1
            print(s, ": Absent")

    print("\nTotal Present:", present)
    print("Total Absent:", absent)

while True:
    print("\n1.Add Students\n2.Mark Attendance\n3.View Attendance\n4.Exit")
    choice = input("Choose: ")

    if choice == "1":
        add_students()

    elif choice == "2":
        if students:
            mark_attendance()
        else:
            print("Add students first")

    elif choice == "3":
        if attendance:
            view_attendance()
        else:
            print("No attendance marked")

    elif choice == "4":
        print("Exiting program")
        break

    else:
        print("Invalid choice")
