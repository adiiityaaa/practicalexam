VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   6075
   ClientLeft      =   120
   ClientTop       =   465
   ClientWidth     =   14385
   LinkTopic       =   "Form1"
   ScaleHeight     =   6075
   ScaleWidth      =   14385
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton rB2 
      Caption         =   "Remove"
      Height          =   615
      Left            =   8760
      TabIndex        =   4
      Top             =   4560
      Width           =   1695
   End
   Begin VB.CommandButton rB1 
      Caption         =   "Remove"
      Height          =   615
      Left            =   2040
      TabIndex        =   3
      Top             =   4560
      Width           =   1695
   End
   Begin VB.CommandButton aB 
      Caption         =   "Add"
      Height          =   615
      Left            =   5400
      TabIndex        =   2
      Top             =   1680
      Width           =   1695
   End
   Begin VB.ListBox hL 
      Height          =   3570
      Left            =   7680
      TabIndex        =   1
      Top             =   480
      Width           =   3615
   End
   Begin VB.ListBox cL 
      Height          =   3570
      Left            =   1080
      TabIndex        =   0
      Top             =   600
      Width           =   3735
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub aB_Click()
If cL.ListIndex >= 0 Then
hL.AddItem cL.List(cL.ListIndex)
cL.RemoveItem cL.ListIndex
ElseIf hL.ListIndex >= O Then
cL.AddItem hL.List(hL.ListIndex)
hL.RemoveItem hL.ListIndex
Else: MsgBox ("Please Select an Item!")
End If
End Sub

Private Sub Form_Load()
cL.AddItem ("Processor")
cL.AddItem ("Motherboard")
cL.AddItem ("Power Supply")
hL.AddItem ("Monitor")
hL.AddItem ("Mouse")
hL.AddItem ("Keyboard")
End Sub

Private Sub rB1_Click()
If cL.ListIndex >= 0 Then
cL.RemoveItem cL.ListIndex
Else: MsgBox ("Please Select an Item from Software List!")
End If
End Sub

Private Sub rB2_Click()
If hL.ListIndex >= 0 Then
hL.RemoveItem hL.ListIndex
Else: MsgBox ("Please Select an Item from Hardware List!")
End If
End Sub
