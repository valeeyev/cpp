import pytesseract
from PIL import Image
import csv

# Set the path to the Tesseract executable (change this to your path)
pytesseract.pytesseract.tesseract_cmd = r'C:\'

# Load the handwritten image
image_path = 'image.png'
img = Image.open(image_path)

# Perform OCR on the image
text = pytesseract.image_to_string(img)

# Write the extracted text to a text file
with open('extracted_text.txt', 'w', encoding='utf-8') as file:
    file.write(text)

# Write the extracted text to a CSV file (each character in a separate cell)
with open('extracted_text.csv', 'w', newline='', encoding='utf-8') as csvfile:
    csvwriter = csv.writer(csvfile)
    csvwriter.writerow(text)

print("Text extracted and saved to 'extracted_text.txt' and 'extracted_text.csv'")
