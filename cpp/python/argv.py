import sys

if len(sys.argv) != 2:
    print("comand line bo'sh")
    sys.exit(1)

print(f"Hello {sys.argv[1]}")
sys.exit(0)
