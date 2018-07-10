#!/usr/bin/python

import gi
gi.require_version('Gtk', '3.0')
from gi.repository import Gtk

w = Gtk.Window()
box = Gtk.VBox()
w.add(box)

l = Gtk.Label("Hello, world!")
box.add(l)

b = Gtk.Button("Quit")
box.add(b)

def terminate(o):
    Gtk.main_quit()

b.connect("clicked", terminate)
w.show_all()
Gtk.main()