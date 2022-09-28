#!/usr/bin/python3
Rect = __import__('9-rectangle').Rectangle


class Square(Rect):
    def __init__(self, size):
        self.integer_validator("size", size)
        super().__init__(size, size)
        self.__size = size
