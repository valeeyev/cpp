import qrcode


img = qrcode.make("https://valeeyev.github.io/website/")
img.save("valiev.png", "PNG")
