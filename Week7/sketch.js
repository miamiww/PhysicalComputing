
var whichAxis;
var key;
var serial;
var portName = '/dev/cu.usbmodem1421';


function setup(){
  createCanvas(100,100);

  serial = new p5.SerialPort();
  serial.on('open',portOpen);
  serial.on('data',serialEvent);
  serial.open(portName);
}

function draw(){
  background(100);
  fill(100,255,0);
  ellipse(width/2,height/2,x,y);
  serial.write(whichAxis);
}

function portOpen(){
  console.log("got the port open");
}

function serialEvent(){
  var data = serial.readLine();
  if (data.length > 0){
    console.log(data);
    serial.write('x');
  }
}

function keyReleased(){
  console.log(key);
  whichAxis = key;
}
