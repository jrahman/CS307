
#include <string>
using namespace std;

string testDataA = R"(
{
    "classID": 4,
    "userID": 5,
    "levelID": 7,
    "level": 
    { "height":10,
     "layers":[
            {
             "data":[
        0, 0, 0, 94, 95, 95, 95, 95, 95, 95, 95, 96, 32, 32, 32, 0, 0, 0,
        0, 0, 0, 74, 75, 75, 75, 75, 75, 75, 75, 76, 32, 32, 32, 0, 0, 0,
        0, 0, 0, 74, 75, 75, 75, 75, 75, 75, 75, 76, 32, 32, 32, 0, 0, 0,
        0, 0, 0, 74, 75, 75, 75, 75, 75, 75, 75, 75, 95, 95, 95, 0, 0, 0,
        0, 0, 0, 74, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 0, 0, 0,
        0, 0, 0, 74, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 75, 0, 0, 0,
        0, 0, 0, 74, 75, 75, 75, 75, 75, 75, 75, 75, 70, 70, 70, 0, 0, 0,
        0, 0, 0, 74, 75, 75, 75, 75, 75, 75, 75, 76, 32, 32, 32, 0, 0, 0,
        0, 0, 0, 74, 75, 75, 75, 75, 75, 75, 75, 76, 32, 32, 32, 0, 0, 0,
        0, 0, 0, 71, 70, 70, 70, 70, 70, 70, 70, 73, 32, 32, 32, 0, 0, 0],
             "height":10,
             "name":"BackgroundLayer",
             "opacity":1,
             "type":"tilelayer",
             "visible":true,
             "width":18,
             "x":0,
             "y":0
            }, 
            {
             "data":[
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 181, 181, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 181, 181, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0],
             "height":10,
             "name":"BushLayer",
             "opacity":1,
             "type":"tilelayer",
             "visible":true,
             "width":18,
             "x":0,
             "y":0
            }, 
            {
             "data":[
        0, 0, 0, 0, 230, 210, 0, 229, 0, 229, 190, 190, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 209, 229, 0, 209, 229, 190, 0, 189, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 209, 209, 209, 0, 0, 0,
        0, 0, 0, 0, 0, 229, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 230, 0, 189, 229, 0, 0, 189, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 229, 0, 0, 0, 229, 0, 0, 209, 209, 209, 0, 0, 0,
        0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 229, 190, 229, 190, 229, 190, 229, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             "height":10,
             "name":"MazeLayer",
             "opacity":1,
             "type":"tilelayer",
             "visible":true,
             "width":18,
             "x":0,
             "y":0
            }, 
            {
             "data":[0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
             "height":10,
             "name":"ExitLayer",
             "opacity":1,
             "type":"tilelayer",
             "visible":true,
             "width":18,
             "x":0,
             "y":0
            }, 
            {
             "draworder":"topdown",
             "height":0,
             "name":"ActorLayer",
             "objects":[
                    {
                     "height":64,
                     "name":"Link",
                     "properties":
                        {
                         "id":"1",
                         "npc_id":"1",
                         "rotation":"0"
                        },
                     "rotation":0,
                     "type":"npc",
                     "visible":true,
                     "width":64,
                     "x":256,
                     "y":64
                    }, 
                    {
                     "height":64,
                     "name":"Wizard",
                     "properties":
                        {
                         "id":"2",
                         "npc_id":"0",
                         "rotation":"180"
                        },
                     "rotation":0,
                     "type":"npc",
                     "visible":true,
                     "width":64,
                     "x":640,
                     "y":64
                    }, 
                    {
                     "height":64,
                     "name":"Hero",
                     "properties":
                        {
                         "id":"0",
                         "rotation":"90"
                        },
                     "rotation":0,
                     "type":"hero",
                     "visible":true,
                     "width":64,
                     "x":256,
                     "y":512
                    }],
             "opacity":1,
             "type":"objectgroup",
             "visible":true,
             "width":0,
             "x":0,
             "y":0
            }, 
            {
             "draworder":"topdown",
             "height":0,
             "name":"TriggerLayer",
             "objects":[
                    {
                     "height":64,
                     "name":"Link Dialog",
                     "properties":
                        {
                         "actor":"1",
                         "dialogue":"Hi there sleeping beauty. You are like an old man sleeping for 12 hours straight! But, anyway you must be already getting super tired of typing in Hero.moveUp() a million times.  I heard there were something called arguments in functions! \nAnd if you forgot what a function is it is just special code that is designed to do a set of instructions, but it conveniently lets you do it with 1 line of code! Try giving Hero.MoveRight() a number and see what happens!",
                         "repeatable":"1",
                         "stopMove":"1",
                         "triggerTarget":"0"
                        },
                     "rotation":0,
                     "type":"dialogue",
                     "visible":true,
                     "width":64,
                     "x":320,
                     "y":64
                    }, 
                    {
                     "height":64,
                     "name":"NextLevelTrigger",
                     "properties":
                        {
                         "nextLevel":"1",
                         "repeatable":"1",
                         "stopMove":"1",
                         "triggerTarget":"0"
                        },
                     "rotation":0,
                     "type":"levelexit",
                     "visible":true,
                     "width":64,
                     "x":896,
                     "y":320
                    }, 
                    {
                     "height":64,
                     "name":"Wizard Dialog",
                     "properties":
                        {
                         "actor":"2",
                         "dialogue":"HEY THERE! You are finally awake! Why dont you come towards me (wizard) and we can talk! Try walking by typing in Hero.moveUp().",
                         "repeatable":"0",
                         "stopMove":"1",
                         "triggerTarget":"0"
                        },
                     "rotation":0,
                     "type":"dialogue",
                     "visible":true,
                     "width":64,
                     "x":256,
                     "y":448
                    }],
             "opacity":1,
             "type":"objectgroup",
             "visible":true,
             "width":0,
             "x":0,
             "y":0
            }],
     "orientation":"orthogonal",
     "properties":
        {

        },
     "renderorder":"right-down",
     "tileheight":64,
     "tilesets":[
            {
             "firstgid":1,
             "image":"..\/assets\/spritesheets\/RPGpack_sheet.png",
             "imageheight":832,
             "imagewidth":1280,
             "margin":0,
             "name":"Map",
             "properties":
                {

                },
             "spacing":0,
             "tileheight":64,
             "tilewidth":64
            }],
     "tilewidth":64,
     "version":1,
     "width":18
    }
})";
