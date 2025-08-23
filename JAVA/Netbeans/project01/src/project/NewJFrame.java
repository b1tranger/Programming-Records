/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */

package project;

import javax.swing.*;
import javax.swing.table.*;
import javax.swing.border.*;
import java.awt.*;
import java.awt.event.*;
import java.util.*;
import java.util.List;

/**
 *
 * @author gsmur
 */
public class BracketForgeGUI extends JFrame {
    private TournamentManager manager;
    private JPanel mainPanel;
    private JPanel matchesPanel;
    private JPanel standingsPanel;
    private JLabel statusLabel;
    private JButton newTournamentBtn;
    private JButton advanceRoundBtn;
    private JButton saveBtn;
    private JButton loadBtn;
    
    // Colors for modern UI
    private final Color PRIMARY_COLOR = new Color(46, 125, 50);
    private final Color SECONDARY_COLOR = new Color(66, 165, 245);
    private final Color SUCCESS_COLOR = new Color(76, 175, 80);
    private final Color WARNING_COLOR = new Color(255, 152, 0);
    private final Color ERROR_COLOR = new Color(244, 67, 54);
    private final Color BACKGROUND_COLOR = new Color(250, 250, 250);
    private final Color CARD_COLOR = Color.WHITE;
    
    public BracketForgeGUI() {
        setTitle("🏆 BracketForge Tournament Manager");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());
        getContentPane().setBackground(BACKGROUND_COLOR);
        
        initializeComponents();
        
        // Try to load existing tournament
        manager = TournamentManager.loadFromFile("tournament.dat");
        if (manager != null && !manager.isTournamentComplete() && !manager.getTeams().isEmpty()) {
            updateDisplay();
            statusLabel.setText("Loaded existing tournament - " + manager.getSystem() + " system, Round " + manager.getRound());
        } else {
            showNewTournamentDialog();
        }
        
        setSize(1200, 800);
        setLocationRelativeTo(null);
        setVisible(true);
    }
    
    private void initializeComponents() {
        // Top toolbar
        JPanel toolbar = new JPanel(new FlowLayout(FlowLayout.LEFT, 10, 10));
        toolbar.setBackground(PRIMARY_COLOR);
        toolbar.setBorder(BorderFactory.createEmptyBorder(5, 10, 5, 10));
        
        newTournamentBtn = createStyledButton("New Tournament", SUCCESS_COLOR);
        advanceRoundBtn = createStyledButton("Advance Round", SECONDARY_COLOR);
        saveBtn = createStyledButton("Save", PRIMARY_COLOR);
        loadBtn = createStyledButton("Load", PRIMARY_COLOR);
        
        newTournamentBtn.addActionListener(e -> showNewTournamentDialog());
        advanceRoundBtn.addActionListener(e -> advanceRound());
        saveBtn.addActionListener(e -> saveTournament());
        loadBtn.addActionListener(e -> loadTournament());
        
        toolbar.add(newTournamentBtn);
        toolbar.add(advanceRoundBtn);
        toolbar.add(saveBtn);
        toolbar.add(loadBtn);
        
        add(toolbar, BorderLayout.NORTH);
        
        // Main content panel with split pane
        mainPanel = new JPanel(new GridLayout(1, 2, 10, 10));
        mainPanel.setBackground(BACKGROUND_COLOR);
        mainPanel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        
        // Matches Panel
        matchesPanel = new JPanel();
        matchesPanel.setLayout(new BoxLayout(matchesPanel, BoxLayout.Y_AXIS));
        matchesPanel.setBackground(BACKGROUND_COLOR);
        
        JScrollPane matchesScroll = new JScrollPane(matchesPanel);
        matchesScroll.setBorder(createTitledBorder("Matches"));
        matchesScroll.getVerticalScrollBar().setUnitIncrement(16);
        
        // Standings Panel
        standingsPanel = new JPanel();
        standingsPanel.setLayout(new BoxLayout(standingsPanel, BoxLayout.Y_AXIS));
        standingsPanel.setBackground(BACKGROUND_COLOR);
        
        JScrollPane standingsScroll = new JScrollPane(standingsPanel);
        standingsScroll.setBorder(createTitledBorder("Standings"));
        standingsScroll.getVerticalScrollBar().setUnitIncrement(16);
        
        mainPanel.add(matchesScroll);
        mainPanel.add(standingsScroll);
        
        add(mainPanel, BorderLayout.CENTER);
        
        // Status bar
        statusLabel = new JLabel("Ready");
        statusLabel.setBorder(BorderFactory.createEmptyBorder(5, 10, 5, 10));
        statusLabel.setFont(new Font("Arial", Font.BOLD, 12));
        
        JPanel statusPanel = new JPanel(new BorderLayout());
        statusPanel.setBackground(Color.WHITE);
        statusPanel.setBorder(BorderFactory.createMatteBorder(1, 0, 0, 0, Color.LIGHT_GRAY));
        statusPanel.add(statusLabel, BorderLayout.WEST);
        
        add(statusPanel, BorderLayout.SOUTH);
    }
    
    private JButton createStyledButton(String text, Color bgColor) {
        JButton button = new JButton(text);
        button.setBackground(bgColor);
        button.setForeground(Color.WHITE);
        button.setFont(new Font("Arial", Font.BOLD, 12));
        button.setFocusPainted(false);
        button.setBorderPainted(false);
        button.setOpaque(true);
        button.setCursor(new Cursor(Cursor.HAND_CURSOR));
        button.setBorder(BorderFactory.createEmptyBorder(8, 15, 8, 15));
        
        button.addMouseListener(new MouseAdapter() {
            public void mouseEntered(MouseEvent e) {
                button.setBackground(bgColor.darker());
            }
            public void mouseExited(MouseEvent e) {
                button.setBackground(bgColor);
            }
        });
        
        return button;
    }
    
    private TitledBorder createTitledBorder(String title) {
        TitledBorder border = BorderFactory.createTitledBorder(
            BorderFactory.createLineBorder(Color.LIGHT_GRAY, 1),
            title,
            TitledBorder.LEFT,
            TitledBorder.TOP,
            new Font("Arial", Font.BOLD, 14),
            PRIMARY_COLOR
        );
        return border;
    }
    
    private void showNewTournamentDialog() {
        JDialog dialog = new JDialog(this, "New Tournament Setup", true);
        dialog.setLayout(new BorderLayout());
        dialog.setSize(500, 600);
        dialog.setLocationRelativeTo(this);
        
        JPanel contentPanel = new JPanel();
        contentPanel.setLayout(new BoxLayout(contentPanel, BoxLayout.Y_AXIS));
        contentPanel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
        contentPanel.setBackground(BACKGROUND_COLOR);
        
        // Number of teams
        JPanel teamsPanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        teamsPanel.setBackground(BACKGROUND_COLOR);
        teamsPanel.add(new JLabel("Number of teams (2-32):"));
        JSpinner teamsSpinner = new JSpinner(new SpinnerNumberModel(8, 2, 32, 1));
        teamsSpinner.setPreferredSize(new Dimension(80, 25));
        teamsPanel.add(teamsSpinner);
        contentPanel.add(teamsPanel);
        
        // Tournament system
        JPanel systemPanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        systemPanel.setBackground(BACKGROUND_COLOR);
        systemPanel.add(new JLabel("Tournament System:"));
        String[] systems = {"knockout", "points", "groups"};
        JComboBox<String> systemCombo = new JComboBox<>(systems);
        systemCombo.setPreferredSize(new Dimension(150, 25));
        systemPanel.add(systemCombo);
        contentPanel.add(systemPanel);
        
        contentPanel.add(Box.createVerticalStrut(10));
        
        // Team names area
        JLabel teamsLabel = new JLabel("Enter team names (one per line):");
        teamsLabel.setAlignmentX(Component.LEFT_ALIGNMENT);
        contentPanel.add(teamsLabel);
        
        JTextArea teamsArea = new JTextArea(10, 30);
        teamsArea.setText("Team Alpha\nTeam Beta\nTeam Gamma\nTeam Delta\nTeam Epsilon\nTeam Zeta\nTeam Eta\nTeam Theta");
        JScrollPane scrollPane = new JScrollPane(teamsArea);
        scrollPane.setAlignmentX(Component.LEFT_ALIGNMENT);
        contentPanel.add(scrollPane);
        
        // Buttons
        JPanel buttonPanel = new JPanel(new FlowLayout(FlowLayout.RIGHT));
        buttonPanel.setBackground(BACKGROUND_COLOR);
        
        JButton startBtn = createStyledButton("Start Tournament", SUCCESS_COLOR);
        JButton cancelBtn = createStyledButton("Cancel", ERROR_COLOR);
        
        startBtn.addActionListener(e -> {
            int numTeams = (int) teamsSpinner.getValue();
            String system = (String) systemCombo.getSelectedItem();
            String[] teamNames = teamsArea.getText().split("\n");
            
            if (teamNames.length < numTeams) {
                JOptionPane.showMessageDialog(dialog, 
                    "Please enter at least " + numTeams + " team names.", 
                    "Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            if (system.equals("groups") && numTeams < 4) {
                JOptionPane.showMessageDialog(dialog, 
                    "Group system requires at least 4 teams.", 
                    "Error", 
                    JOptionPane.ERROR_MESSAGE);
                return;
            }
            
            manager = new TournamentManager();
            manager.setSystem(system);
            
            for (int i = 0; i < numTeams; i++) {
                String name = (i < teamNames.length && !teamNames[i].trim().isEmpty()) 
                    ? teamNames[i].trim() 
                    : "Team " + (i + 1);
                manager.registerTeam(name);
            }
            
            manager.generateBracket();
            updateDisplay();
            statusLabel.setText("New " + system + " tournament started with " + numTeams + " teams");
            dialog.dispose();
        });
        
        cancelBtn.addActionListener(e -> dialog.dispose());
        
        buttonPanel.add(startBtn);
        buttonPanel.add(cancelBtn);
        
        dialog.add(contentPanel, BorderLayout.CENTER);
        dialog.add(buttonPanel, BorderLayout.SOUTH);
        dialog.setVisible(true);
    }
    
    private void updateDisplay() {
        if (manager == null) return;
        
        updateMatchesPanel();
        updateStandingsPanel();
        
        advanceRoundBtn.setEnabled(manager.isRoundComplete() && !manager.isTournamentComplete());
        
        if (manager.isTournamentComplete()) {
            statusLabel.setText("🏆 Tournament Complete! Champion: " + manager.getTeams().get(0).getName());
            JOptionPane.showMessageDialog(this, 
                "Tournament Complete!\nChampion: " + manager.getTeams().get(0).getName(), 
                "Tournament Complete", 
                JOptionPane.INFORMATION_MESSAGE);
        }
    }
    
    private void updateMatchesPanel() {
        matchesPanel.removeAll();
        
        if (manager.getSystem().equalsIgnoreCase("groups") && manager.getPhase().equals("group_stage")) {
            for (Group group : manager.getGroups()) {
                JPanel groupPanel = createGroupMatchesPanel(group);
                matchesPanel.add(groupPanel);
                matchesPanel.add(Box.createVerticalStrut(10));
            }
        } else {
            List<Match> matches = new ArrayList<>();
            if (manager.getGroups().isEmpty()) {
                // Get matches directly for knockout/points
                for (Team team : manager.getTeams()) {
                    // This is a workaround - in real implementation, 
                    // we'd need a getter for currentMatches in TournamentManager
                }
            }
            
            JPanel roundPanel = createRoundMatchesPanel("Round " + manager.getRound(), matches);
            matchesPanel.add(roundPanel);
        }
        
        matchesPanel.revalidate();
        matchesPanel.repaint();
    }
    
    private JPanel createGroupMatchesPanel(Group group) {
        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        panel.setBackground(CARD_COLOR);
        panel.setBorder(BorderFactory.createCompoundBorder(
            BorderFactory.createLineBorder(Color.LIGHT_GRAY),
            BorderFactory.createEmptyBorder(10, 10, 10, 10)
        ));
        
        JLabel groupLabel = new JLabel(group.getName());
        groupLabel.setFont(new Font("Arial", Font.BOLD, 16));
        groupLabel.setForeground(PRIMARY_COLOR);
        panel.add(groupLabel);
        panel.add(Box.createVerticalStrut(10));
        
        for (Match match : group.getMatches()) {
            panel.add(createMatchPanel(match));
            panel.add(Box.createVerticalStrut(5));
        }
        
        return panel;
    }
    
    private JPanel createRoundMatchesPanel(String roundName, List<Match> matches) {
        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        panel.setBackground(CARD_COLOR);
        panel.setBorder(BorderFactory.createCompoundBorder(
            BorderFactory.createLineBorder(Color.LIGHT_GRAY),
            BorderFactory.createEmptyBorder(10, 10, 10, 10)
        ));
        
        JLabel roundLabel = new JLabel(roundName);
        roundLabel.setFont(new Font("Arial", Font.BOLD, 16));
        roundLabel.setForeground(PRIMARY_COLOR);
        panel.add(roundLabel);
        panel.add(Box.createVerticalStrut(10));
        
        for (Match match : matches) {
            panel.add(createMatchPanel(match));
            panel.add(Box.createVerticalStrut(5));
        }
        
        return panel;
    }
    
    private JPanel createMatchPanel(Match match) {
        JPanel panel = new JPanel(new BorderLayout());
        panel.setBackground(BACKGROUND_COLOR);
        panel.setBorder(BorderFactory.createEmptyBorder(5, 10, 5, 10));
        panel.setMaximumSize(new Dimension(Integer.MAX_VALUE, 40));
        
        String matchText = String.format("Match %d: %s vs %s", 
            match.matchId, 
            match.getTeam1().getName(), 
            match.getTeam2().getName());
        
        JLabel matchLabel = new JLabel(matchText);
        matchLabel.setFont(new Font("Arial", Font.PLAIN, 12));
        
        if (match.getResult().equals("Pending")) {
            JButton updateBtn = createStyledButton("Update", SECONDARY_COLOR);
            updateBtn.setPreferredSize(new Dimension(80, 25));
            updateBtn.addActionListener(e -> showUpdateMatchDialog(match));
            panel.add(matchLabel, BorderLayout.CENTER);
            panel.add(updateBtn, BorderLayout.EAST);
            panel.setBackground(new Color(255, 253, 231));
        } else {
            String resultText = String.format("%s: %d - %d %s", 
                match.getTeam1().getName(),
                match.getTeam1Goals(),
                match.getTeam2Goals(),
                match.getTeam2().getName());
            matchLabel.setText(resultText);
            matchLabel.setForeground(SUCCESS_COLOR);
            panel.add(matchLabel, BorderLayout.CENTER);
            panel.setBackground(new Color(232, 245, 233));
        }
        
        return panel;
    }
    
    private void showUpdateMatchDialog(Match match) {
        JDialog dialog = new JDialog(this, "Update Match Result", true);
        dialog.setLayout(new BorderLayout());
        dialog.setSize(400, 250);
        dialog.setLocationRelativeTo(this);
        
        JPanel contentPanel = new JPanel(new GridBagLayout());
        contentPanel.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
        contentPanel.setBackground(BACKGROUND_COLOR);
        
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(5, 5, 5, 5);
        gbc.fill = GridBagConstraints.HORIZONTAL;
        
        // Match info
        gbc.gridx = 0; gbc.gridy = 0; gbc.gridwidth = 2;
        JLabel matchLabel = new JLabel("Match " + match.matchId, JLabel.CENTER);
        matchLabel.setFont(new Font("Arial", Font.BOLD, 14));
        contentPanel.add(matchLabel, gbc);
        
        // Team 1 score
        gbc.gridx = 0; gbc.gridy = 1; gbc.gridwidth = 1;
        contentPanel.add(new JLabel(match.getTeam1().getName() + " goals:"), gbc);
        
        gbc.gridx = 1;
        JSpinner team1Spinner = new JSpinner(new SpinnerNumberModel(0, 0, 99, 1));
        contentPanel.add(team1Spinner, gbc);
        
        // Team 2 score
        gbc.gridx = 0; gbc.gridy = 2;
        contentPanel.add(new JLabel(match.getTeam2().getName() + " goals:"), gbc);
        
        gbc.gridx = 1;
        JSpinner team2Spinner = new JSpinner(new SpinnerNumberModel(0, 0, 99, 1));
        contentPanel.add(team2Spinner, gbc);
        
        // Warning for knockout
        if (manager.getSystem().equalsIgnoreCase("knockout") || manager.getPhase().equals("knockout_stage")) {
            gbc.gridx = 0; gbc.gridy = 3; gbc.gridwidth = 2;
            JLabel warningLabel = new JLabel("⚠️ Draws not allowed in knockout rounds", JLabel.CENTER);
            warningLabel.setForeground(WARNING_COLOR);
            contentPanel.add(warningLabel, gbc);
        }
        
        // Buttons
        JPanel buttonPanel = new JPanel(new FlowLayout(FlowLayout.RIGHT));
        buttonPanel.setBackground(BACKGROUND_COLOR);
        
        JButton updateBtn = createStyledButton("Update", SUCCESS_COLOR);
        JButton cancelBtn = createStyledButton("Cancel", ERROR_COLOR);
        
        updateBtn.addActionListener(e -> {
            int team1Goals = (int) team1Spinner.getValue();
            int team2Goals = (int) team2Spinner.getValue();
            
            try {
                manager.setMatchResult(match.matchId, "", team1Goals, team2Goals);
                updateDisplay();
                statusLabel.setText("Match " + match.matchId + " updated successfully");
                dialog.dispose();
            } catch (IllegalArgumentException ex) {
                JOptionPane.showMessageDialog(dialog, ex.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
            }
        });
        
        cancelBtn.addActionListener(e -> dialog.dispose());
        
        buttonPanel.add(updateBtn);
        buttonPanel.add(cancelBtn);
        
        dialog.add(contentPanel, BorderLayout.CENTER);
        dialog.add(buttonPanel, BorderLayout.SOUTH);
        dialog.setVisible(true);
    }
    
    private void updateStandingsPanel() {
        standingsPanel.removeAll();
        
        if (manager.getSystem().equalsIgnoreCase("groups") && manager.getPhase().equals("group_stage")) {
            for (Group group : manager.getGroups()) {
                standingsPanel.add(createGroupStandingsPanel(group));
                standingsPanel.add(Box.createVerticalStrut(10));
            }
        } else {
            standingsPanel.add(createOverallStandingsPanel());
        }
        
        standingsPanel.revalidate();
        standingsPanel.repaint();
    }
    
    private JPanel createGroupStandingsPanel(Group group) {
        JPanel panel = new JPanel(new BorderLayout());
        panel.setBackground(CARD_COLOR);
        panel.setBorder(BorderFactory.createCompoundBorder(
            BorderFactory.createLineBorder(Color.LIGHT_GRAY),
            BorderFactory.createEmptyBorder(10, 10, 10, 10)
        ));
        
        JLabel groupLabel = new JLabel(group.getName() + " Standings");
        groupLabel.setFont(new Font("Arial", Font.BOLD, 14));
        groupLabel.setForeground(PRIMARY_COLOR);
        panel.add(groupLabel, BorderLayout.NORTH);
        
        String[] columns = {"Pos", "Team", "Pts", "W", "D", "L", "GF", "GA", "GD"};
        DefaultTableModel model = new DefaultTableModel(columns, 0) {
            @Override
            public boolean isCellEditable(int row, int column) {
                return false;
            }
        };
        
        List<Team> sortedTeams = new ArrayList<>(group.getTeams());
        sortedTeams.sort((a, b) -> {
            if (b.getPoints() != a.getPoints()) return b.getPoints() - a.getPoints();
            if (b.getGoalDifference() != a.getGoalDifference()) return b.getGoalDifference() - a.getGoalDifference();
            return b.getGoalsFor() - a.getGoalsFor();
        });
        
        int position = 1;
        for (Team team : sortedTeams) {
            model.addRow(new Object[]{
                position++,
                team.getName(),
                team.getPoints(),
                team.getWins(),
                team.getDraws(),
                team.getLosses(),
                team.getGoalsFor(),
                team.getGoalsAgainst(),
                team.getGoalDifference()
            });
        }
        
        JTable table = new JTable(model);
        table.setRowHeight(25);
        table.getTableHeader().setBackground(PRIMARY_COLOR);
        table.getTableHeader().setForeground(Color.WHITE);
        table.getTableHeader().setFont(new Font("Arial", Font.BOLD, 12));
        
        JScrollPane scrollPane = new JScrollPane(table);
        scrollPane.setPreferredSize(new Dimension(0, 150));
        panel.add(scrollPane, BorderLayout.CENTER);
        
        return panel;
    }
    
    private JPanel createOverallStandingsPanel() {
        JPanel panel = new JPanel(new BorderLayout());
        panel.setBackground(CARD_COLOR);
        panel.setBorder(BorderFactory.createCompoundBorder(
            BorderFactory.createLineBorder(Color.LIGHT_GRAY),
            BorderFactory.createEmptyBorder(10, 10, 10, 10)
        ));
        
        JLabel titleLabel = new JLabel("Tournament Standings");
        titleLabel.setFont(new Font("Arial", Font.BOLD, 14));
        titleLabel.setForeground(PRIMARY_COLOR);
        panel.add(titleLabel, BorderLayout.NORTH);
        
        String[] columns = {"Pos", "Team", "Pts", "W", "D", "L", "GF", "GA", "GD"};
        DefaultTableModel model = new DefaultTableModel(columns, 0) {
            @Override
            public boolean isCellEditable(int row, int column) {
                return false;
            }
        };
        
        List<Team> sortedTeams = new ArrayList<>(manager.getTeams());
        sortedTeams.sort((a, b) -> {
            if (b.getPoints() != a.getPoints()) return b.getPoints() - a.getPoints();
            if (b.getGoalDifference() != a.getGoalDifference()) return b.getGoalDifference() - a.getGoalDifference();
            return b.getGoalsFor() - a.getGoalsFor();
        });
        
        int position = 1;
        for (Team team : sortedTeams) {
            model.addRow(new Object[]{
                position++,
                team.getName(),
                team.getPoints(),
                team.getWins(),
                team.getDraws(),
                team.getLosses(),
                team.getGoalsFor(),
                team.getGoalsAgainst(),
                team.getGoalDifference()
            });
        }
        
        JTable table = new JTable(model);
        table.setRowHeight(25);
        table.getTableHeader().setBackground(PRIMARY_COLOR);
        table.getTableHeader().setForeground(Color.WHITE);
        table.getTableHeader().setFont(new Font("Arial", Font.BOLD, 12));
        
        JScrollPane scrollPane = new JScrollPane(table);
        panel.add(scrollPane, BorderLayout.CENTER);
        
        return panel;
    }
    
    private void advanceRound() {
        if (manager == null || !manager.isRoundComplete()) {
            JOptionPane.showMessageDialog(this, 
                "Please complete all matches before advancing.", 
                "Cannot Advance", 
                JOptionPane.WARNING_MESSAGE);
            return;
        }
        
        manager.advanceToNextRound();
        updateDisplay();
        
        if (!manager.isTournamentComplete()) {
            statusLabel.setText("Advanced to Round " + manager.getRound());
        }
    }
    
    private void saveTournament() {
        if (manager == null) {
            JOptionPane.showMessageDialog(this, 
                "No tournament to save.", 
                "Error", 
                JOptionPane.ERROR_MESSAGE);
            return;
        }
        
        manager.saveToFile("tournament.dat");
        statusLabel.setText("Tournament saved successfully");
        JOptionPane.showMessageDialog(this, 
            "Tournament saved successfully!", 
            "Save Complete", 
            JOptionPane.INFORMATION_MESSAGE);
    }
    
    private void loadTournament() {
        TournamentManager loaded = TournamentManager.loadFromFile("tournament.dat");
        if (loaded == null) {
            JOptionPane.showMessageDialog(this, 
                "No saved tournament found.", 
                "Error", 
                JOptionPane.ERROR_MESSAGE);
            return;
        }
        
        manager = loaded;
        updateDisplay();
        statusLabel.setText("Tournament loaded successfully");
        JOptionPane.showMessageDialog(this, 
            "Tournament loaded successfully!", 
            "Load Complete", 
            JOptionPane.INFORMATION_MESSAGE);
    }
    
    public static void main(String[] args) {
        try {
            UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
        } catch (Exception e) {
            e.printStackTrace();
        }
        
        SwingUtilities.invokeLater(() -> new BracketForgeGUI());
    }
}

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 400, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 300, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    /**
     * @param args the command line arguments
     */


    // Variables declaration - do not modify//GEN-BEGIN:variables
    // End of variables declaration//GEN-END:variables

