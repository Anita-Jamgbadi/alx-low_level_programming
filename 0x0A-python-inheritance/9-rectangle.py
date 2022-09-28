#!/usr/bin/python3
BG = __import__('7-base_geometry').BaseGeometry


class Rectangle(BG):

    def __init__(self, width, height):
        super().integer_validator("width", width)
        self.__width = width
        super().integer_validator("height", height)
        self.__height = height

    def area(self):
        return self.__width*self.__height

    def __str__(self):
        msg = "[" + str(self.__class__.__name__) + "]"
        msg += str(self.__width) + "/" + str(self.__height)
        return msg
