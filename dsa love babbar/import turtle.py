import turtle

def draw_elephant():
    # set up the turtle
    t = turtle.Turtle()
    t.speed(10)
    t.color("blue")
    t.width(2)
    t.begin_fill()
    
    # draw the head
    t.circle(50)
    
    # draw the trunk
    t.left(90)
    t.forward(100)
    t.right(90)
    t.forward(50)
    t.right(90)
    t.forward(50)
    t.left(90)
    t.forward(50)
    
    # draw the ears
    t.left(90)
    t.forward(50)
    t.right(90)
    t.forward(50)
    t.left(90)
    t.forward(50)
    t.right(90)
    t.forward(50)
    
    # draw the legs
    t.right(90)
    t.forward(100)
    t.left(90)
    t.forward(50)
    t.left(90)
    t.forward(100)
    t.right(90)
    t.forward(50)
    
    t.end_fill()
    turtle.done()

draw_elephant()
