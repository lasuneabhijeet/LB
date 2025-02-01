// MarvellousMain.java 

import javax.swing;
import java.awt.*;
import java.awt.event.*;
import java.awt.BroderLayout;
import java.awt.Dimension;
import java.swing.JLable;

class MaverllousLogin extends Template implements ActioListener,Runnable
{
    JButton SUBMIT;
    JLable lable1,lable2,lable3,TopLable;
    final JTextFiled text1,text2;
    private static int attemp = 3;

    MaverllousLogin()
    {
        TopLable = new JLable();
        TopLable.setHorizontalAlignment(SwingConstants.CENTER);
        TopLable.setText("Marvellous Packer Unpacker :Login");
        TopLable.setForeground(Color.BLUE);

        Dimension topsize = TopLable.getPreferredSize();
        TopLable.setBoundas(50,40,topsize.width,topsize.height);
        _header.add(TopLable);

        lable1 = new JLable();
        lable.setText("Username:");
        lable1.setForeground(Color.White);

        Dimension size = lable1.getPreferredSize();

        lable1.setBounds(50,135,size.width,size.height);
        lable1.setHorizontalAlignment(SwingConstants.CENTER);

        text1 = new JTextFiled(15);
        Dimension tsize = text1.getPreferredSize();
        text1.setBounds(200,135,tsize.width,tsize.height);

        text1.setToolTipText("ENTER USERNAME");

        lable2 = new JLable();
        lable2.setText("Password:");
        lable2.setBounds(50,175,size.width,size.height);
        lable2.setForeground(Color.white);
        lable2.setHorizontalAlignment(SwingConstants .CENTER);

        text2 = new JPasswordFiled(15);
        text2.setBounds(200,175,tsize.width,tsize.height);

        text2.setToolTipText("ENTER PASSWORD");

        text2.addFoucsListener(new FocusListener()
        {
             public void focusGained(FocusEvent e)
             {}
             public void focusLost(FocusEvent e)
             {
                 lable3.setText(" ");
             }
    
     
        });

           SUBMIT   = new JButton("SUBMIT");
          SUBMIT.setHorizontalAlignment(SwingConstants.CENTER);

         Dimension ssize = SUBMIT.getPreferredSize();
    
         SUBMIT.setBounds(50,220,ssize.width,ssize.height);

         lable3 = new JLable();
         lable3.setText(" ");

         Dimension l3size = lablel3.getPreferredSize();

         lable3.setForeground(Color.RED);
         lable3.setBounds(50,250,l3size.width , l3size.height);

         Thread t = new Thread(this);
         t.start();

         _content.add(lable1);
         _content.add(text1);

          _content.add(lable2);
         _content.add(text2);

         _content.add(lable3);
         _content.add(SUBMIT);

         pack();
         validate();

          ClockHome();
          setVisible(true);
          this.setSize(500,500);
          this.setResizable(false);
         setLocationRelativeTo(null);
         SUBMIT.addActionListener(this);

    }
    public boolean validate(String Username,String Password)
    {
         if((Username.length()< 8)||(Password.length() < 8))
          return false;
          else
         return true;
    }

      public void actionPerformed(ActionEvent ae)
      {
         String value1 = text1.getText();
         String value2 = text2.getText();

         if(ae.getSource() == exit)
         {
             this.setVisible(false);
             System.exit(0);
         }
         if(ae.getSource()== minimize)
         {
           this.setState(this.ICONIFIED);
         }

         if(ae.getSource() == SUBMIT)
          {
             if(validate(value1,value2) == false)
              {
                 text1.setText("");
                 text2.setText("");
                 JOptionPane.showMessageDialog(this,"short username","Marvellous packaer Unpacker",JOptionPane.ERROR_MESSAGE);

                }

              if(value1.equals("MarvellousAdmin") && value2.equals("MarvellousAdmin"));
                {
                   NextPage page = new NextPage(value1);
                   this.setVisible(fasle);
                   page.pack();
                  page.setVisible(true);
                   page.setSize(500,500);
                }
                 else
               {
                 attemp--;

                  if(attemp == 0)
                  {
                    JOptionPane.showMessageDialog(this,"Number of attempts finishhed ","Marvellous Packer Unpacker",JOptionPane.ERROR_MESSAGE);
                    this.dispose();
                    System.exit(0);
                  }
                  JOptionPane.showMessageDialog(this,"Incorrect login or password",
                  "Error",JOptionPane.ERROR_MESSAGE);
                  
                }
            }
        }

 public void run()
  {
      for(;;)
      {
          if(text2.isFocusOwner())
           {
              if (Toolkit.getDefaultToolkit().getLockingKeyState(KeyEvent.Vk_CAPS_LOCK))
              {
                  text2.setToolTipText("Waring : CAPS LOCK is on");
               }
                else
                text2.setToolTipText("");

                if((text2.getText()).length() < 8)
                lable3.setText("weak Password");
                else
               lable3.setText("");
            }
       }
    }
}

class  MarvellousMain
{
    public static void main(String arg[])
    {
        try
        {
            MaverllousLogin frame = new MaverllousLogin();
            frame.setVisible(true);
        }
        catch(Exception e)
        {
            JOptionPane.showMessageDialog(null,e.getMessage());
        }
    }
}

// Template.java 

/*import javax.swing.*;
import javax.swing.plaf.basic.BasicBorders;
import java.awt.*;
import java.awt.event.ActionEvent;
import java .awt.event.ActioListener;
import java.io.Seriallizable;
import java.text.SlimpleDtaeFormat;
import java.util.Date;*/

class ClockLabel extends JLabel implements ActioListener
{
    String type;
    SimpleDateFormat sdf;

    public ClockLabel(String type)
    {
        this.type = type;
        setForeground(Color.green);

        switch (type)
        {
            case "date" : sdf = new SimpleDateFormat("MMMM dd yyyy");
            setFont(new Font("sans-serif",Font.PLAIN,12));
            setHorizontalAlignment(SwingConstants.LEFT);
            break;
            case "time": sdf = new SimpleDateFormat("hh:mm:ss a");
            setFont(new Font("sans-serif",Font.PLAIN,40));
            setHorizontalAlignment(SwingConstants.CENTER);
            break;
            case "day" : sdf = new SimpleDateFormat("EEEE ");
            setFont(new Font("sans-serif",Font.PLAIN,16));
            setHorizontalAlignment(SwingConstants.RIGHT);
            break;
            default : sdf = new SimpleDateFormat();
            break;
        }
        Timer t = new Timer(1000,this);
        t.start();
    }
    public void actionPerformed(ActionEvent ae)
    {
        Date d = new Date();
        setText(sdf.format(d));
    }
}

class Template extends JFrame implements Seriallizable, ActioListener
{
    JPanel JPanel_header;
    JPanel JPanel_content;
    JPanel JPanel_top;

    ClockLable dayLable;
    ClockLable timeLable;
    ClockLable dataLable;

    JButton minimize , exit;

    public Template()
    {
        setDefaultcloseOperation(javax.swing.wimdowConstants.DISPOSE_ON_CLOSE);
        GridBagLayout grid = new GridBagLayout();
        setLayout(grid);

        _top = new JPanel();
        _top.setBackground(Color.LIGHT_GRAY);

        _top.setLayout(null);

        getcontentPane().add(_top,new GridBageConstraints (0,0,1,1,1,5, GridBageConstraints.BASELINE,GridBageConstraints.BOTH,new
        Insets(0,0,0,0),0,0));

        _header = new JPanel();
        _header.setLayout(null);

        _header.setBackground(Color.white);
        getcontentPane().add(_top,new GridBageConstraints (0,0,1,1,1,20, GridBageConstraints.BASELINE,GridBageConstraints.BOTH,new
        Insets(0,0,0,0),0,0));

        _content = new JPanel();
        _content.setLayout(null);
        _content.setBackground(new Color(0,50,120));
        JScrollPane jsp = new JScrollPane(_content,iScrollpane.VERYICAL_SCROLLBAR_ALWAYS,JScrollPane.HORIZONTAL_SCROLLBAR_ALWAYS);
        jsp.setVerticalScrollBarPollicy(ScrollPaneConstraints.VERTICAL_SCROLLBAR_AS-NEEDED);

        getcontentPane().add(jsp,new GridBageConstraints(0,2,1,1,1,75, GridBageConstraints.BASELINE,GridBageConstraints.BOTH,new Insets
        (0,0,0,0),0,0));
        SetTitle("Marvellous Packer-Unpacker");

        Clock();
        CloseAndMin();  
    }
    void CloseAndMin()
    {
        minimize = new JButton("-");
        minimize.setBackground(Color.LIGHT_GRAY);
        minimize.setBounds(MAXIMIZED_HORIZ,0,45,20);

        exit = new JButton("X");
        exit.setHorizontalAlignment(SwingConstants.CENTER);
        exit.setBackground(Color.LIGHT_GRAY);
        exit.setHorizontalTextPosition(0);
        exit.setBounds(MAXIMIZED_HORIZ+45,0,45,20);

        _top.add(minimize);
        _top.add(exit);

        exit.addActionListener(this);
        minimize.addActionListener(this);
    }

    public void actionPerformed(ActionEvent ae)
    {
        if(ae.getSource() == exit)
        {
            this.setVisible(fasle);
            System.exit(0);
        }

        if(ae.getSource() == minimize)
        {
            setState(JFrame.ICONIFIED);
        }
    }

    void Clock()
    {
        dataLable = new ClockLable("date");
        timeLable = new ClockLable("time");
        dayLable = new ClockLable("day");

        dataLable.setForeground(Color.blue);
        timeLable.setForeground(Color.blue);
        dayLable.setForeground(Color.blue);

        dayLable.setFont(new Font("Century",Font.BOLD,15));

        dayLable.setBounds(700,10,200,100);

        dateLable.setFont(new Font("Century",Font.BOLD,15));

        dayLable.setBounds(800,-40,200,100);

        timeLable.setFont(new Font("Century",Font.BOLD,15));

        timeLable.setBounds(760,-15,200,100);

        _header.add(dateLable);
        _header.add(timeLable);
        _header.add(dayLable);
    }

    void ClockHome()
    {
        dateLable = new ClockLable("date");
        timeLable = new ClockLable("time");
        dayLable = new ClockLable("day");

        dataLable.setForeground(Color.blue);
        timeLable.setForeground(Color.blue);
        dayLable.setForeground(Color.blue);
        dayLable.setFont(new Font("Century",Font.BOLD,15));
        dayLable.setBounds(200,20,200,100);
        dateLable.setFont(new Font("Century",Font.BOLD,15));
        dateLable.setBounds(300,-40,200,100);

        timeLable.setFont(new Font("Century",Font.BoLD,15));
        timeLable.setBounds(260,-10,200,100);

        _header.add(dateLable);
        _header.add(timeLable);
        _header.add(dayLable);
    }
}  

// NextPage.java

/*import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActioListener;*/

class NextPage extends Template implements ActioListener
{
    JLable lable;
    JButton pack ,unpack;

    NextPage(String value)
    {
        setDefaultcloseOperation(WindowConstants.DISPOSE_ON_CLOSE);

        lable = new JLabel("Welcome :"+value);
        Dimension size = label.getPreferredSize();
        lable.setBounds(40,50,size.width + 60, size.height);
        lable.setFont(new Font("Century",Font.BOLD,17));
        lable.setForeground(Color.blue);

        pack = new JButton("Pack Files");
        Dimension bsize = pack.getPreferredSize();
        pack.setBounds(100,100,bsize.width,bsize.height);
        pack.addActionListener(this);

        unpack = new JButton("Unpack Files");
        Dimension b2size = Unpack.getPreferredSize();
        pack.setBounds(300,100,b2size.width,b2size.height);
        Unpack.addActionListener(this);


        _header.add(label);
        _content.add(pack);
        _content.add(unpack);

        ClockHome();
        this.setSize(600,600);
        this.setResizable(false);

       this.setVisible(true);
    }

    public void actionPerformed(ActionEvent ae)
    {
        if(ae.getSource() == exit)
        {
            this.setVisible(fasle);
            System.exit(0);
        }
        if(ae.getSource() == minimize)
        {
            this.setstate(this.ICONIFIED);
        }
        if(ae.getSource() == pack)
        {
            this.setVisible(fasle);
            try
            {
                MarvellosPackFront obj = new MarvellousUnpackFront();
            }
            catch (Exception e) {}
        }
        if(ae.getSource() == Unpack)
        {
            this.setVisible(false);
            MarvellosPackFront obj = new MarvellousUnpackFront();
        }
    }
}
    // MarvellousPackFront.java

    
   /*import javax.swing.*;
   import java.awt.*;
   import java.awt.event.ActionEvent;
   import java.awt.event.ActioListener;*/

public class MarvellosPackFront extends Template implements ActioListener
{
     JButton SUBMIT, PREVIOUS;
     JLable lable1,lable2,titel;
     final JTextFileld text1,text2;

     public MarvellosPackFront()
     {
        setDefaultcloseOperation(WindowConstants.DISPOSE_ON_CLOSE);

        title = new JLable(" Marvellous Packing Portal");
        Dimension size = title.getPreferredSize();
        title.setBounds(40,50,size.width + 60,size.hight);
        title.setFont(new Font("Century",Font.BOLD,17));
        title.setForeground(Color.blue);
        
        lable1 = new JLabel();
        lable1.setText("Directory name");
        lable1.setForeground(Color,white);
        lable1.setBounds(350,50,size.width,size.height);

        text1 = new JTextFiled(15);
        Dimension tsize = text1.getPreferredSize();
        text1.setBounds(500,50,tsize.width,tsize.height);
        text1.setToolTipText("Enter name of directory");

        lable2 = new JLabel();
        labll2.setText("Destination file name");
        lable2.setForeground(Color,white);
        lable2.setBounds(350,100,size.width + 60,size.height);

        text2 = new JTextFiled(15);
        text2.setBounds(500,100,tsize.width, tsize.height);
        text2.setToolTipText("Enter Destination file name");

        SUBMIT = new JButton("SUBMIT");
        Dimension b2size = SUBMIT.getPreferredSize();
        SUBMIT.setBounds(350,200,bsize.width,bsize.height);
        SUBMIT.addActionListener(this);

        PREVIOUS = new JButton("PREVIOUS");
        Dimension b2size = PREVIOUS.getPreferredSize();
        PREVIOUS.setBounds(500,200,bsize.width,bsize.height);
        PREVIOUS.addActionListener(this);

        _header.add(titel);
        _content.add(lable1);
        _content.add(lable2);
        _content.add(text1);
        _content.add(text2);
        _content.add(SUBMIT);
        _content.add(PREVIOUS);

        this.setSize(1000,400);
        this.setResizable(false);
        this.setVisible(true);
        text1.requestFocusInWindow();
    }

     
    public void actionPerformed(ActionEvent ae)
     {
        if (ae.getSource() == exit)  
        {
            this.setVisible(false);
           System.exit(0);
        }
        if ( ae.getSource() == minimize )
        {
             this.setstate(this.ICONIFIED);
        }
        if ( ae.getsourcrce() == SUBMIT)
        {
         try
         {
            MarvellousPaker obj = new MarvellousPacker(text1.getText(),text2.getText());
            this.dispose();
            NextPage t = new NextPage("MarvellousAdmin");
          }
          catch(Exception e){}
          }
        if(ae.getSource() == PREVIOUS)
        {
          this.setVisible(false);
          this.dispose();
          NextPage t = new NextPage("MarvellousAdmin");
        
        }
    
     }
    }
     // MarvellosPackFront.java

    /* import java.io.BufferReader;
     import java.io.File;
     import java.io.FileReader;
     import java.io.IOException;
     import java.nio.file.Files;
     import java.nio.file.Path;
     import java.nio.file.Paths;
     impoer java.util.List;
     import java.util.stream.Stream;
     import java.io.File;
     import java.io.FileInputSream;
     import java.io.FileOutputStream;
     import java.io.IoException;
     import java.util.Array;*/

     public class MarvellousPacker
     {
        FileOutputStream OutStream = null;

        String ValidExt[] = {".txt",".c",".java",".cpp"};

        public MarvellousPacker(String src, String Dest)throws Exception
        {
            String Magic = " Marvellous";
            byte arr [] = Magic.getBytes();
            File outfile = new File(Dest);

            File infile = null;
            outStream = new FileOutputStream(Dest);
            outStream.write(arr,0,arr.length);

            File floder = new File(src);

            System.setProperty("user.dir",src);

            listAllfiles(src);
        }

        public void listAllfiles(String path)
        {
            try
            
                (Stream<Path> Paths = File.walk(Paths.get(Path)))
                {
                    Paths.forEach(filePath ->
                    {
                       if(Files.isRegularFile(filePath))
                       {
                        try
                        {
                            String name = filePath.getfileName().toString();
                            String ext = name.subString(name.lastIndexof("."));

                            List<String> list = Arrays.asList(ValidExit);

                            if(list.contains(ext))
                            {
                                File file = new File(filepath.getfileName().tostring());

                                Pack(file.getAboslutePath());
                            }
                        }
                        catch(Exception e)
                        {
                            System.out.println(e);
                        }
                       }
                    });
                }
                catch(IOException e)
                {
                     System.out.println(e);
                }
        }
            public void Pack(String filePath)
            {
                FileInputStream instream = null;

                try
                {
                   byte[] buffer = new byte[1024];

                   int length;

                   byte temp[] = new byte [100];

                   File fobj = new File(filePath);

                   String Header = filePath+ " "+fobj.length();

                   for(int i = Header.length(); i < 100; i++)
                   Header += " ";

                   temp = Header.getBytes();

                   inStream = new FileInputSream(filePath);

                   outStream.write(temp,0,temp.length);

                   while((length = inStream.read(buffer)) > 0)
                   {
                     outStream.write(buffer,0,length);
                   }
                    instream.close();
                }
                catch(Exception e)
            {
                 System.out.println(e);
            }
                
        }
            
        
     }

   // MarvellousUnpackfront.java

    /*import javax.swing.*;
   import java.awt.*;
   import java.awt.event.ActionEvent;
   import java.awt.event.ActioListener;*/

   class InvalidFileException extends Exception
   {
     public InvalidFileException(String str)
     {
        super(str);
     }
   }

   public class MarvellousUnpackFront extends Template implements ActioListener
   {
      JButton SUBMIT, PREVIOUS;
     JLable lable1,lable2,titel;
     final JTextFile text1;

     public MarvellousUnpackFront()
     {
        setDefaultcloseOperation(WindowConstants.DISPOSE_ON_CLOSE);

        title = new JLable(" Unpacking Portal");
        Dimension size = title.getPreferredSize();
        title.setBounds(40,50,size.width + 60,size.hight);
        title.setFont(new Font("Century",Font.BOLD,17));
        title.setForeground(Color.blue);
        
        lable1 = new JLable();
        lable1.setText("File Name ");
        lable1.setForeground(Color,white);
        lable1.setBounds(350,50,size.width,size.height);

        text1 = new JTextFiled(15);
        Dimension tsize = text1.getPreferredSize();
        text1.setBounds(500,50,tsize.width,tsize.height);
        text1.setToolTipText("Enter name of directory");
 
  

        SUBMIT = new JButton("Extract Here");
        Dimension b2size = SUBMIT.getPreferredSize();
        SUBMIT.setBounds(350,200,bsize.width,bsize.height);
        SUBMIT.addActionListener(this);

        PREVIOUS = new JButton("PREVIOUS");
        Dimension b2size = PREVIOUS.getPreferredSize();
        PREVIOUS.setBounds(500,200,bsize.width,bsize.height);
        PREVIOUS.addActionListener(this);

        _header.add(titel);
        _content.add(label1);
        
        _content.add(text1);
        
        _content.add(SUBMIT);
        _content.add(PREVIOUS);

        this.setSize(1000,400);
        this.setResizable(false);
        this.setVisible(true);
        text1.requestFocusInWindow();
    }

    public void actionPerformed(ActionEvent ae)
    {
        if(ae.getSource() == exit)
        {
            this.setVisible(false);
            System.exit(0);
        }
        if(ae.getSource() == minimize)
        {
            this.setState(this.ICONIFIED);
        }
        if(ae.getSource() == SUBMIT)
        {
            try
            {
                MarvellousUnpack obj = new MarvellousUnpack(text1.getTet());
                this.dispose();
                NextPage t = new NextPage("admin");
            }
            catch(InvalidFileException obj)
            {
                this.setVisible(false);
                this.dispose();

                JOptionPane.showMessageDialog(this,"Invalid Packed File","Error",JOptionPane.ERROR_MESSAGE);

                NextPage t = new NextPage("MarvellousAdmin");
            }
            catch(Exception e)
            {}
        }
        if(ae.getSource() == PREVIOUS)
        {
            this.setVisible(false);
            this.dispose();
            NextPage t = new NextPage("admin");
        }
    }

}

// MarvellousUnpack.java

/*import java.io.BufferReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.io.FileInputSream;
import java.io.FileOutputStream;*/
 
public class MarvellousUnpack
{
    FileOutputStream OutStream = null;

    public MarvellousUnpack(String src)throws Exception
    {
        unpack(src);
    }

    public MarvellousUnpack(String filePath) throws Exception
    {
        try
        {
            FileInputSream inStream = new FileInputSream(filePath);

            byte header[] = new byte[100];
            int length = 0;

            byte Magic[] = new byte[12];
            inStream.read(Magic,0,Magic.length);

            String MagicStr = new String(Magic);

            if(!MagicStr.equals("Marvellous11"))
            {
                throw new IOException("Inavlid Packed  file format");
            }
            while((length = inStream.read(header,0,100))>0)
            {
                String str = new String(header);

                String ext = str.subString(str.lastIndexof("/"));
                ext = ext.subString(1);

                String[]words = ext.split("\\s");

                String filename = words[0];

                int size = Integer.parseInt(words[1]);

                byte arr[] = new byte[size];

                inStream.read(arr,0,size);

                FileOutputStream fout = new FileOutputStream(filename);
                fout.writr(arr,0,size);
            }
        }
        catch(InvalidFileException obj)
        {
            throw new InvalidFileException("Invalid packed file format");
        }
        catch(Exception e)
        {}

    }
}